/* sub_6075C304
 * address: 0x6075C304   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075C304(int a1, int *a2)
{
  __int16 v3; // r0
  int v4; // r11
  sead__SafeString *v5; // r6
  int v6; // r0
  void *v7; // r7
  int Model; // r0
  void *v9; // r4
  ModelWrapper *v10; // r5
  ModelWrapper *v11; // r0
  _WORD *v14; // [sp+20h] [bp-28h]

  v14 = (_WORD *)(a1 + 1180);
  v3 = FIELD_U16(a1, 304);
  if ( (v3 & 1) != 0 )
    *v14 |= 1u;
  if ( (v3 & 2) != 0 )
    *v14 |= 1u;
  if ( (v3 & 4) != 0 )
    *v14 |= 2u;
  if ( (v3 & 8) != 0 )
    *v14 |= 4u;
  if ( (v3 & 0x10) != 0 )
    *v14 |= 8u;
  if ( (v3 & 0x20) != 0 )
    *v14 |= 8u;
  v4 = 0;
  v5 = (sead__SafeString *)&dword_60CBF2B0;
  do
  {
    if ( (*v14 & (unsigned __int16)(1 << v4)) != 0 )
    {
      v6 = sub_60792ACC(a1);
      v7 = *(void **)(a1 + 16);
      if ( v6 == 1 )
        Model = Resource_getModel(*(void **)(a1 + 16), v5, 6, 0, 1, 4, 0, 0, 1, 0);
      else
        Model = Resource_getModel2(*(void **)(a1 + 16), v5, 0, 1, 4, 0, 0, 0, 0);
      v9 = (void *)Model;
      v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v11 = ModelWrapper_ctor(v10, v9, 0, 1, 4, 0, 0);
      ModelWrapper_setup(v11, v7, a2, 0);
      *(_DWORD *)(a1 + 1160 + 4 * v4) = v10;
    }
    ++v4;
    ++v5;
  }
  while ( v4 != 4 );
  FIELD_U32(a1, 1176) = FIELD_U32(a1, 1160);
  FIELD_U8(a1, 1182) = 1;
  return 1;
}
