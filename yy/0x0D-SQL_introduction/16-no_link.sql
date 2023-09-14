-- lists all records in a table
-- results display score and the name
-- ordered in descending order
SELECT score, name
FROM second_table
WHERE name IS NOT NULL
ORDER BY score DESC;
