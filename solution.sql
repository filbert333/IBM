SELECT owner_id, owner_name, SUM(category_id) as "owns"
FROM category_article_mapping
ORDER BY DISTINCT(category_id) DESC;
