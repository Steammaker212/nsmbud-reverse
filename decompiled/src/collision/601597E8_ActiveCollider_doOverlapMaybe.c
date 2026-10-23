/* ActiveCollider_doOverlapMaybe
 * address: 0x601597E8   size: 576   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall ActiveCollider_doOverlapMaybe(ActiveCollider *ac1, ActiveCollider *ac2)
{
  _BOOL4 result; // r0
  StageActor *owner1; // r1
  StageActor *owner2; // r2
  int v7; // r3
  bool v8; // zf
  bool v9; // zf
  int v10; // r7
  int v11; // r2
  int v12; // r8
  int v13; // r1
  int v14; // r6
  int v15; // r11
  int v16; // r0
  int v17; // r1
  int v18; // [sp+4h] [bp-34h]
  int v19; // [sp+8h] [bp-30h]
  void (__fastcall *v20)(ActiveCollider *, ActiveCollider *); // [sp+Ch] [bp-2Ch]
  void (__fastcall *callback)(ActiveCollider *, ActiveCollider *); // [sp+10h] [bp-28h]

  result = 0;
  if ( ac2 != ac1 )
  {
    owner1 = FIELD_U32(ac1, 0x40);
    owner2 = FIELD_U32(ac2, 0x40);
    if ( owner2 != owner1 )
    {
      v7 = FIELD_U32(ac1, 0x44);
      v8 = owner2 == (StageActor *)v7;
      if ( owner2 != (StageActor *)v7 )
        v8 = owner1 == (StageActor *)FIELD_U32(ac2, 0x44);
      if ( !v8 )
      {
        v9 = (FIELD_U8(ac1, 0x6E) & 2) == 0;
        if ( (FIELD_U8(ac1, 0x6E) & 2) == 0 )
          v9 = (FIELD_U8(ac2, 0x6E) & 2) == 0;
        if ( v9 && (FIELD_U8(ac1, 0x6C) & FIELD_U8(ac2, 0x6C)) != 0 && FIELD_U8(ac1, 0x6D) == FIELD_U8(ac2, 0x6D) )
        {
          v10 = FIELD_U32(ac2, 0x74).field_14;
          v11 = FIELD_U32(ac1, 0x74).field_1C & (1 << v10);
          if ( !v11 )
            return FIELD_U32(ac1, 0x5C) != 0;
          v12 = 1 << FIELD_U32(ac1, 0x74).field_14;
          v13 = FIELD_U32(ac2, 0x74).field_1C;
          if ( (v13 & v12) == 0 )
            return FIELD_U32(ac1, 0x5C) != 0;
          v18 = FIELD_U32(ac2, 0x74).field_24;
          callback = (void (__fastcall *)(ActiveCollider *, ActiveCollider *))FIELD_U32(ac2, 0x74).callback;
          v19 = FIELD_U32(ac1, 0x74).field_24;
          v20 = (void (__fastcall *)(ActiveCollider *, ActiveCollider *))FIELD_U32(ac1, 0x74).callback;
          v14 = FIELD_U32(ac1, 0x74).mask & (1 << FIELD_U32(ac2, 0x74).category);
          if ( (v11 & 2) == 0 || v14 )
          {
            v15 = FIELD_U32(ac2, 0x74).mask & (1 << FIELD_U32(ac1, 0x74).category);
            if ( v15 || ((unsigned __int8)v13 & (unsigned __int8)v12 & 2) == 0 )
            {
              v16 = FIELD_U32(ac1, 0x74).field_10;
              v17 = FIELD_U32(ac2, 0x74).field_10;
              if ( FIELD_U32(AreaTask_intance, 1828) )
              {
                if ( !((int (__fastcall *)(ActiveCollider *, ActiveCollider *))*(&off_60BD4810 + 4 * v17 + v16))(
                        ac1,
                        ac2) )
                  return FIELD_U32(ac1, 0x5C) != 0;
              }
              else if ( ((int (__fastcall *)(ActiveCollider *, ActiveCollider *))*(&off_60BD47D0[4 * v17] + v16))(
                          ac1,
                          ac2) != 1 )
              {
                return FIELD_U32(ac1, 0x5C) != 0;
              }
              if ( (v18 & 4) == 0 )
              {
                FIELD_U32(ac1, 0x5C) |= 1 << v10;
                if ( v14 )
                  FIELD_U32(ac1, 0x64) |= v14;
                if ( v15 )
                  FIELD_U32(ac1, 0x60) |= v15;
              }
              if ( (v19 & 4) == 0 )
              {
                FIELD_U32(ac2, 0x5C) |= v12;
                if ( v14 )
                  FIELD_U32(ac2, 0x60) |= v14;
                if ( v15 )
                  FIELD_U32(ac2, 0x64) |= v15;
              }
              if ( v20 && (v18 & 4) == 0 )
                v20(ac1, ac2);
              if ( (v19 & 4) == 0 )
              {
                if ( callback )
                  callback(ac2, ac1);
              }
              return FIELD_U32(ac1, 0x5C) != 0;
            }
          }
        }
      }
    }
  }
  return result;
}
