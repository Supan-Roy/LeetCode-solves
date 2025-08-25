SELECT l.book_id, l.title, l.author, l.genre, l.publication_year, l.total_copies as current_borrowers
FROM library_books l
JOIN borrowing_records b ON l.book_id = b.book_id
WHERE b.return_date IS NULL
GROUP BY b.book_id
HAVING l.total_copies - COUNT(*) = 0
ORDER BY current_borrowers DESC, l.title;