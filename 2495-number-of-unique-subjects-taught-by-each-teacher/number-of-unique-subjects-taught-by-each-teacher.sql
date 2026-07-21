select  DISTINCT t.teacher_id as teacher_id,
COUNT(DISTINCT(t.subject_id)) as  cnt 


from Teacher as t
group by 
    t.teacher_id
order by
    t.teacher_id;
