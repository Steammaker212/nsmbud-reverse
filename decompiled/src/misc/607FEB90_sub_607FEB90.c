/* sub_607FEB90
 * address: 0x607FEB90   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FEB90(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  float v6; // s2
  int *v7; // r0
  float v8; // s0
  float v9; // s16

  v4 = sub_60802694();
  v5 = FIELD_U32(a1, 16);
  if ( v4 == 1 )
  {
    v6 = 88.0;
    v7 = (int *)(v5 + 12);
    v8 = (float)FIELD_S32(v5, 8) + 88.0;
  }
  else
  {
    v6 = 72.0;
    v7 = (int *)(v5 + 4);
    v8 = (float)*(int *)v5 + 80.0;
  }
  v9 = v6 - (float)*v7;
  if ( a2 == 1 )
  {
    v9 = v9 - (float)FIELD_U16(v5, 22);
    v8 = v8 + (float)FIELD_U16(v5, 20);
  }
  if ( FIELD_U8(a1, 28) )
  {
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 20, v8, 0.1, 10.0, 0.001);
    JUMPOUT(0x60832560);
  }
  FIELD_U8(a1, 28) = 1;
  FIELD_F32(a1, 20) = v8;
  FIELD_F32(a1, 24) = v9;
  return 1;
}
