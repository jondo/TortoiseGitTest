int Segmentation::ignore( int position, int category )
{
  if( print[position] == category ) return 0;

  print[position]  = category;
  output[position] = table( category );
  return 1;
}
