/* sub_602372C0
 * address: 0x602372C0   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602372C0(int a1, int a2, __int64 *a3, char a4)
{
  __int64 *v6; // r7
  int v8; // r5
  sead_ListNode *v9; // r5
  int v10; // r6
  int v11; // r7
  sead_ListNode *v12; // r8

  v6 = a3;
  v8 = 0;
  if ( !dword_60C8D9DC )
    return v8;
  if ( FIELD_U32(a1, 84) || FIELD_U32(a1, 80) )
  {
    if ( FIELD_U32(a1, 96) == a2 )
    {
      if ( !a3 )
        v6 = (__int64 *)&unk_60B3B8CC;
      if ( sub_60236A80(a1 + 16, v6, a4) == 1 )
      {
        if ( !FIELD_U32(a1, 84) )
        {
          v9 = (sead_ListNode *)(a1 + 80);
          if ( !FIELD_U32(a1, 80) )
          {
            v10 = FIELD_U32(a1, 92);
LABEL_20:
            v11 = dword_60C8D9DC;
            v12 = (sead_ListNode *)(dword_60C8D9DC + 224);
            if ( v10 )
            {
              FIELD_U32(a1, 92) = 0;
              sead__ListNode__erase(v9);
              --FIELD_U32(v10, 8);
            }
            FIELD_U32(a1, 92) = v12;
            sead__ListNode__insertFront(v12, v9);
            ++FIELD_U32(v11, 232);
            goto LABEL_23;
          }
        }
        goto LABEL_23;
      }
      return v8;
    }
    sub_60237560(a1);
  }
  if ( EffectData_setEffectId((EffectData *)(a1 + 16), a2) == 1 )
  {
    FIELD_U32(a1, 96) = a2;
    if ( dword_60C8D9DC )
    {
      if ( !v6 )
        v6 = (__int64 *)&unk_60B3B8CC;
      if ( sub_60236A80(a1 + 16, v6, a4) == 1 )
      {
        if ( !FIELD_U32(a1, 84) )
        {
          v9 = (sead_ListNode *)(a1 + 80);
          if ( !FIELD_U32(a1, 80) )
          {
            v10 = FIELD_U32(a1, 92);
            goto LABEL_20;
          }
        }
LABEL_23:
        v8 = 1;
        FIELD_U8(a1, 100) = 1;
      }
    }
  }
  return v8;
}
