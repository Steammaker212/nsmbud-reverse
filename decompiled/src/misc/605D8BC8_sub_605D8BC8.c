/* sub_605D8BC8
 * address: 0x605D8BC8   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D8BC8(_DWORD *a1)
{
  int v2; // r7
  int *v3; // r6
  _DWORD *v4; // r5
  int result; // r0

  v2 = 0;
  a1[25] = -1103101952;
  a1[24] = -1065353216;
  a1[33] = 1082130432;
  a1[34] = 1082130432;
  a1[35] = 0;
  a1[30] = 0;
  a1[2002] = 0;
  v3 = a1 + 2002;
  v4 = a1 + 1516;
  if ( sub_605E3BBC(a1) )
  {
    sub_605EAB48(v4, 0.0);
  }
  else
  {
    sub_605EAB48(v4, 0.0);
    v2 = 1;
  }
  *v3 = v2;
  result = 120;
  switch ( HIBYTE(a1[2000]) )
  {
    case 0:
      result = 30;
      goto LABEL_8;
    case 1:
      result = ((30 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 30;
      goto LABEL_8;
    case 2:
      goto LABEL_8;
    case 3:
      result = ((180 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 120;
LABEL_8:
      a1[2001] = result;
      break;
    default:
      result = a1[2000];
      break;
  }
  return result;
}
