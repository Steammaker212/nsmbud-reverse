/* sub_603EA364
 * address: 0x603EA364   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EA364(_DWORD *a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // r1
  unsigned int v5; // r1
  unsigned int v6; // r0
  float v7; // r1
  int result; // r0
  float v9; // s0
  int v10; // r0

  v2 = (_DWORD *)PlayerMgr_instance;
  if ( FIELD_U32(PlayerMgr_instance, 32) )
  {
    v3 = a1[10];
    if ( v3 >= 4 )
      v3 = 0;
    a1[v3 + 11] = 0;
    ++a1[10];
  }
  if ( v2[9] )
  {
    v4 = a1[10];
    if ( v4 >= 4 )
      v4 = 0;
    a1[v4 + 11] = 1;
    ++a1[10];
  }
  if ( v2[10] )
  {
    v5 = a1[10];
    if ( v5 >= 4 )
      v5 = 0;
    a1[v5 + 11] = 2;
    ++a1[10];
  }
  if ( v2[11] )
  {
    v6 = a1[10];
    if ( v6 >= 4 )
      v6 = 0;
    a1[v6 + 11] = 3;
    ++a1[10];
  }
  LODWORD(v7) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000;
  result = a1[10];
  v9 = v7 + -1.0;
  if ( result == 2 )
  {
    if ( v9 >= 0.5 )
      return result;
    goto LABEL_25;
  }
  if ( result == 3 )
  {
    if ( v9 >= 0.333 )
    {
      if ( v9 < 0.666 )
      {
        result = a1[11];
        a1[11] = a1[13];
        a1[13] = result;
      }
      return result;
    }
LABEL_25:
    result = a1[11];
    a1[11] = a1[12];
    a1[12] = result;
    return result;
  }
  if ( result != 4 )
    return result;
  if ( v9 < 0.25 )
  {
    v10 = a1[11];
    a1[11] = a1[12];
    a1[12] = v10;
    result = a1[13];
    a1[13] = a1[14];
LABEL_32:
    a1[14] = result;
    return result;
  }
  if ( v9 < 0.5 )
  {
    result = a1[12];
    a1[12] = a1[13];
    a1[13] = result;
    return result;
  }
  if ( v9 < 0.75 )
  {
    result = a1[11];
    a1[11] = a1[14];
    goto LABEL_32;
  }
  return result;
}
