/* sub_6041E21C
 * address: 0x6041E21C   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041E21C(int a1, char *a2, int a3)
{
  int i; // r3
  int v6; // r6
  int j; // r3
  int k; // r3
  int m; // r3
  int n; // r3
  __int64 v11; // r0
  int v12; // r7

  if ( a2 == "faceline" )
  {
LABEL_27:
    v6 = 0;
LABEL_28:
    v12 = sub_6083DBF4(a3, v6, 0);
    v11 = *(_QWORD *)sub_6083DC04(a3, v6, 0);
    *(_DWORD *)a1 = v12;
    FIELD_U64(a1, 8) = v11;
    return v11;
  }
  for ( i = 0; i < 524289; ++i )
  {
    if ( a2[i] != aFaceline[i] )
      break;
    if ( !a2[i] )
      goto LABEL_27;
  }
  v6 = 1;
  if ( a2 == "hat" )
    goto LABEL_28;
  for ( j = 0; j < 524289; ++j )
  {
    if ( a2[j] != aHat[j] )
      break;
    if ( !a2[j] )
      goto LABEL_28;
  }
  v6 = 2;
  if ( a2 == "mask" )
    goto LABEL_28;
  for ( k = 0; k < 524289; ++k )
  {
    if ( a2[k] != aMask_0[k] )
      break;
    if ( !a2[k] )
      goto LABEL_28;
  }
  v6 = 3;
  if ( a2 == "noseline" )
    goto LABEL_28;
  for ( m = 0; m < 524289; ++m )
  {
    if ( a2[m] != aNoseline[m] )
      break;
    if ( !a2[m] )
      goto LABEL_28;
  }
  v6 = 4;
  if ( a2 == "glass" )
    goto LABEL_28;
  for ( n = 0; n < 524289; ++n )
  {
    if ( a2[n] != aGlass[n] )
      break;
    if ( !a2[n] )
      goto LABEL_28;
  }
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 8) = -1;
  FIELD_U32(a1, 12) = -1;
  LODWORD(v11) = -1;
  return v11;
}
