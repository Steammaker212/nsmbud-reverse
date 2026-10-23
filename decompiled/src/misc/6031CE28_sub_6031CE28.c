/* sub_6031CE28
 * address: 0x6031CE28   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031CE28(int a1)
{
  int v2; // r7
  float *v3; // r5
  int v4; // r6
  int v6; // r0
  int v7; // r4
  int v8; // r1

  v2 = 32;
  v3 = (float *)(a1 + 6872);
  v4 = FIELD_U32(a1, 6864);
  do
  {
    if ( v4-- < 1 )
      v4 = 63;
    v6 = v4;
    if ( (unsigned int)v4 >= 0x40 )
      v6 = 0;
    v7 = a1 + 8 * v6;
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v7 + 6352, *(v3 - 1), 0.125, 1.0, 0.125);
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v7 + 6356, *v3, 0.125, 1.0, 0.125);
    v3 += 2;
    --v2;
  }
  while ( v2 );
  sub_6031C374(a1);
  if ( !FIELD_U16(a1, 6276) )
  {
    v8 = FIELD_U32(a1, 12592);
    if ( v8 <= 0 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C936EC);
    }
    else
    {
      FIELD_U32(a1, 12592) = v8 - 1;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C936C8);
    }
  }
  return j_ModelWrapper_updateAnims(FIELD_U32(a1, 7124));
}
