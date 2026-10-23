/* TileCheck_check
 * address: 0x6015DA30   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TileCheck_check(
        TileCheck *this,
        TileCheck_Result *resultStruct,
        Vec2 *position,
        Vec2 *positionOffset,
        int a5)
{
  int v9; // r10
  int v10; // r0
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s6
  int *v15; // r12
  int v17; // r3
  int v18; // r4
  int v19; // r5
  int v20; // r6
  int v21; // r7
  char v22[4]; // [sp+8h] [bp-78h] BYREF
  float v23; // [sp+Ch] [bp-74h]
  float v24; // [sp+10h] [bp-70h]
  _DWORD v25[7]; // [sp+14h] [bp-6Ch] BYREF
  char v26[4]; // [sp+30h] [bp-50h] BYREF
  float v27; // [sp+34h] [bp-4Ch]
  float v28; // [sp+38h] [bp-48h]
  _DWORD v29[17]; // [sp+3Ch] [bp-44h] BYREF

  if ( !TileMgr_instance )
    return 0;
  v29[0] = 0;
  v29[1] = 0;
  v9 = ((int (__fastcall *)(TileCheck *, char *, Vec2 *, Vec2 *, int))loc_6015D2DC)(
         this,
         v26,
         position,
         positionOffset,
         a5);
  v25[0] = 0;
  v25[1] = 0;
  v10 = ((int (__fastcall *)(TileCheck *, char *, Vec2 *, Vec2 *, int))loc_6015D6F0)(
          this,
          v22,
          position,
          positionOffset,
          a5);
  if ( resultStruct )
  {
    if ( (v9 & v10) == 1 )
    {
      v11 = v23;
      v12 = v24;
      v13 = v27;
      v14 = v28;
      if ( (float)((float)((float)(FIELD_F32(position, 0x4) - v28) * (float)(FIELD_F32(position, 0x4) - v28))
                 + (float)((float)(FIELD_F32(position, 0x0) - v27) * (float)(FIELD_F32(position, 0x0) - v27))) > (float)((float)((float)(FIELD_F32(position, 0x4) - v24) * (float)(FIELD_F32(position, 0x4) - v24))
                                                                                             + (float)((float)(FIELD_F32(position, 0x0) - v23) * (float)(FIELD_F32(position, 0x0) - v23))) )
      {
        v15 = v25;
        FIELD_U8(resultStruct, 0x0) = v22[0];
        FIELD_F32(resultStruct, 0x4) = v11;
        FIELD_F32(resultStruct, 0x8) = v12;
LABEL_13:
        v17 = v15[1];
        v18 = v15[2];
        v19 = v15[3];
        v20 = v15[4];
        v21 = v15[5];
        FIELD_U32(resultStruct, 0xC) = *v15;
        FIELD_U32(resultStruct, 0x10) = v17;
        FIELD_U32(resultStruct, 0x14) = v18;
        FIELD_U32(resultStruct, 0x18) = v19;
        FIELD_U32(resultStruct, 0x1C) = v20;
        FIELD_U32(resultStruct, 0x20) = v21;
        return v9 | v10;
      }
      FIELD_U8(resultStruct, 0x0) = v26[0];
      FIELD_F32(resultStruct, 0x4) = v13;
      FIELD_F32(resultStruct, 0x8) = v14;
    }
    else
    {
      if ( v9 != 1 )
      {
        if ( v10 != 1 )
        {
          FIELD_U8(resultStruct, 0x0) = 0;
          FIELD_F32(resultStruct, 0x4) = 0.0;
          FIELD_F32(resultStruct, 0x8) = 0.0;
          FIELD_U32(resultStruct, 0xC) = 0;
          FIELD_U32(resultStruct, 0x10) = 0;
          FIELD_U32(resultStruct, 0x14) = 0;
          FIELD_U32(resultStruct, 0x18) = 0;
          FIELD_U32(resultStruct, 0x1C) = 0;
          FIELD_U32(resultStruct, 0x20) = 0;
          return v9 | v10;
        }
        v15 = v25;
        FIELD_U8(resultStruct, 0x0) = v22[0];
        FIELD_F32(resultStruct, 0x4) = v23;
        FIELD_F32(resultStruct, 0x8) = v24;
        goto LABEL_13;
      }
      FIELD_U8(resultStruct, 0x0) = v26[0];
      FIELD_F32(resultStruct, 0x4) = v27;
      FIELD_F32(resultStruct, 0x8) = v28;
    }
    v15 = v29;
    goto LABEL_13;
  }
  return v9 | v10;
}
