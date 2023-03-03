SELECT owner_id, owner_name, SUM(category_id) as "owns"
FROM owner;
ORDER BY DISTINCT(category_id) DESC;
