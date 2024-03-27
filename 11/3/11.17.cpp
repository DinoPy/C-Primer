/*
 * copy(v.begin(), v.end(), inserter(c, c.end())); -- legal, will copy each element from the vector into the multiset
 * copy(v.begin(), v.end(), back_insterer(c));     -- ilegal, multiset does not have a push back method.
 * copy(c.begin(), c.end(), inserter(v, v.end())); -- legal, will copy the contents of multiset to the vector using the .insert function of the multiset.
 * copy(c.begin(), c.end(), back_inserter(v));     -- legal, will copy the contents of multiset to vector using the .insert function of the vector.
 */
