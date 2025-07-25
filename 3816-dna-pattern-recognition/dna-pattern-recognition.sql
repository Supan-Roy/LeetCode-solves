SELECT sample_id, dna_sequence, species, 
dna_sequence LIKE 'ATG%' AS has_start,
(dna_sequence LIKE '%TAA' OR dna_sequence LIKE '%TAG' OR dna_sequence LIKE '%TGA') AS has_stop, dna_sequence LIKE '%ATAT%' AS has_atat,
dna_sequence LIKE '%GGG%' as has_ggg
FROM Samples;