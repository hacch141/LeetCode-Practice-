-- 1050. Actors and Directors Who Cooperated At Least Three Times
-- Write a solution to find all the pairs (actor_id, director_id) where the actor has cooperated with the director at least three times.
SELECT actor_id, director_id
FROM ActorDirector
GROUP BY actor_id, director_id
HAVING COUNT(timestamp) >= 3;
