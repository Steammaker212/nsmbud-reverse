/* sub_60001928
 * address: 0x60001928   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60001928(int a1, int a2, int a3)
{
  int v5; // r6
  int v7; // r5
  int v8; // r2
  int v9; // r0
  int v10; // r2
  char v11; // r12
  int v12; // r7
  int v13; // r0
  bool v14; // zf
  int v15; // r0
  __int64 v16; // r2
  int v17; // r0

  v5 = 1;
  if ( (FIELD_U8(a2, 2336) & (unsigned __int8)(1 << dword_60AF1E80[a3])) != 0 )
    return v5;
  v7 = sub_6014B758(a2, a3, a3);
  v9 = sub_6014B758(a2, a3 ^ 1, v8);
  if ( !v9 )
    goto LABEL_12;
  v12 = FIELD_U32(v9, 144);
  if ( ((unsigned int)&dword_60C7B384 & ~(1610619284 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
  {
    dword_60C7B380 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C7B384);
  }
  if ( v12 && (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C7B380) == 1 )
  {
    v5 = 0;
    if ( !v7 || FIELD_U32(v12, 6880) )
      return v5;
  }
  else
  {
LABEL_12:
    if ( !v7 )
      return 0;
  }
  v13 = FIELD_U32(v7, 300);
  v14 = v13 == 31;
  if ( v13 != 31 )
  {
    v5 = 0;
    v14 = v13 == 17;
  }
  if ( !v14 )
    return v5;
  v15 = sub_6014B758(a2, 0, v10);
  if ( v15 )
  {
    v16 = FIELD_U64(v15, 152);
    v5 = 1;
    if ( (float)((float)((float)(*(float *)v16 + FIELD_F32(v15, 172)) + FIELD_F32(v15, 204))
               - (float)((float)(*(float *)HIDWORD(v16) + FIELD_F32(v15, 180)) + FIELD_F32(v15, 212))) < 0.0 )
      return v5;
  }
  v17 = sub_6014B758(a2, 1, v16);
  if ( v17 )
    return (float)((float)((float)(**(float **)(v17 + 152) + FIELD_F32(v17, 172)) + FIELD_F32(v17, 204))
                 - (float)((float)(**(float **)(v17 + 156) + FIELD_F32(v17, 180)) + FIELD_F32(v17, 212))) > -0.0;
  return 0;
}
