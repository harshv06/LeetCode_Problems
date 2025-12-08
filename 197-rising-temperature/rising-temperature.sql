SELECT w.id
FROM weather w
JOIN weather p
  ON p.recordDate = DATE_SUB(w.recordDate, INTERVAL 1 DAY)
WHERE w.temperature > p.temperature
ORDER BY w.recordDate;
