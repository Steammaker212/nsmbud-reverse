/* sub_60810FDC
 * address: 0x60810FDC   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60810FDC(int a1, int a2, int a3)
{
  int v6; // r5
  int SoundArchive; // r6
  int v8; // r0
  int ItemId_const; // r0
  char v10; // r10
  int v11; // r6
  int v12; // r0
  int v13; // r0
  char v14; // r9
  int v15; // r11
  int v16; // r0
  unsigned int v17; // r1
  unsigned int v18; // lr
  int v19; // r5
  int v20; // r7
  __int16 v21; // r0
  __int16 v22; // r3
  __int16 v23; // r10
  unsigned __int16 v24; // r6
  int v25; // r2
  int v26; // r7
  int v27; // r1
  int v28; // r5
  signed int result; // r0
  int v30; // r0
  int v31; // r0
  int v32; // [sp+0h] [bp-40h] BYREF
  unsigned __int8 v33; // [sp+9h] [bp-37h]

  v6 = SoundSystem_instance;
  SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
  v8 = SoundSystem_getSoundArchive(v6);
  ItemId_const = nn__atk__SoundArchive__GetItemId_const(v8, a2);
  v10 = sub_608A9AA4(SoundArchive, ItemId_const);
  v11 = SoundSystem_getSoundArchive(v6);
  v12 = SoundSystem_getSoundArchive(v6);
  v13 = nn__atk__SoundArchive__GetItemId_const(v12, a2);
  v14 = sub_608A9AA4(v11, v13);
  v15 = sub_60808F58(v6, a2);
  v16 = SoundSystem_getSoundArchive(v6);
  sub_608A9BC0(v16, &v32, v15);
  v17 = FIELD_U32(a1, 120);
  v18 = v10 & 0xF;
  if ( (v10 & 0xF) == 0 )
    v18 = 2;
  if ( v17 )
  {
    v19 = v33;
    v20 = 0;
    v21 = 0;
    v22 = -1;
    v23 = -1;
    v24 = 0;
    do
    {
      v25 = a1 + 20 * v20;
      v26 = FIELD_U32(v25, 140);
      if ( v26 && FIELD_U32(v26, 220) == v15 )
      {
        v27 = FIELD_U32(v25, 156);
        ++v24;
        FIELD_U32(v25, 156) = v27 - 1;
        if ( v19 >= v27 )
        {
          v19 = v27 - 1;
          v23 = v21;
        }
        v17 = FIELD_U32(a1, 120);
      }
      else if ( v22 < 0 && !v26 )
      {
        v22 = v21;
      }
      v20 = ++v21;
    }
    while ( v21 < v17 );
  }
  else
  {
    v24 = 0;
    v23 = -1;
    v22 = -1;
  }
  if ( v24 >= v18 )
  {
    result = -1;
    if ( (v14 & 0xF0) != 0 )
      return result;
    v28 = v23;
    if ( v23 > -1 )
    {
      v31 = *(_DWORD *)(a1 + 20 * v23 + 140);
      if ( v31 )
        sub_608AF208(v31, 0);
    }
  }
  else
  {
    v28 = v22;
  }
  result = -1;
  if ( v28 >= 0 && (unsigned int)v28 < FIELD_U32(a1, 120) )
  {
    if ( a3 )
      *(_DWORD *)(a1 + 20 * v28 + 144) = a3;
    v30 = a1 + 20 * v28;
    FIELD_U32(v30, 152) = 1065353216;
    FIELD_U32(v30, 156) = v33;
    return v28;
  }
  return result;
}
