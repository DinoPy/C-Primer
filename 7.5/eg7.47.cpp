// the answer is more subjective than objective
// I think the constructor taking a string of Sales_data should be explicit as there is no point in creating a temporary class object withoult rev & sales_count but very likely there are use cases where implicit conversion may be useful.
// The benefits is the avoidance of unintended conversions and the clarity of code.
// The drawbacks are the need to type more code to explicitly convert in case of need & the lack of implicit conversion when that version would have been more favorable (not seen in this case with current class features).
