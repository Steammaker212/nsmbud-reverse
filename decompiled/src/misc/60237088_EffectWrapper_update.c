/* EffectWrapper_update
 * address: 0x60237088   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall EffectWrapper_update(
        EffectWrapper *this,
        int effectId,
        Vec3 *position,
        Vec3i *rotation,
        Vec3 *scale)
{
  int ret; // r5
  int *v10; // r5
  int v11; // r6
  int v12; // r7
  sead_ListNode *v13; // r8

  ret = 0;
  if ( !dword_60C8D9DC )
    return ret;
  if ( FIELD_U32(this, 0x54) || FIELD_U32(this, 0x50) )
  {
    if ( FIELD_U32(this, 0x60) == effectId )
    {
      if ( EffectData_update(&FIELD_U32(this, 0x10), position, rotation, scale) == 1 )
      {
        if ( !FIELD_U32(this, 0x54) )
        {
          v10 = &FIELD_U32(this, 0x50);
          if ( !FIELD_U32(this, 0x50) )
          {
            v11 = FIELD_U32(this, 0x5C);
LABEL_16:
            v12 = dword_60C8D9DC;
            v13 = (sead_ListNode *)(dword_60C8D9DC + 224);
            if ( v11 )
            {
              FIELD_U32(this, 0x5C) = 0;
              sead__ListNode__erase(v10);
              --FIELD_U32(v11, 8);
            }
            FIELD_U32(this, 0x5C) = (int)v13;
            sead__ListNode__insertFront(v13, (sead_ListNode *)v10);
            ++FIELD_U32(v12, 232);
            goto LABEL_19;
          }
        }
        goto LABEL_19;
      }
      return ret;
    }
    sub_60237560((int)this);
  }
  if ( EffectData_setEffectId(&FIELD_U32(this, 0x10), effectId) == 1 )
  {
    FIELD_U32(this, 0x60) = effectId;
    if ( dword_60C8D9DC )
    {
      if ( EffectData_update(&FIELD_U32(this, 0x10), position, rotation, scale) == 1 )
      {
        if ( !FIELD_U32(this, 0x54) )
        {
          v10 = &FIELD_U32(this, 0x50);
          if ( !FIELD_U32(this, 0x50) )
          {
            v11 = FIELD_U32(this, 0x5C);
            goto LABEL_16;
          }
        }
LABEL_19:
        ret = 1;
        FIELD_U8(this, 0x64) = 1;
      }
    }
  }
  return ret;
}
