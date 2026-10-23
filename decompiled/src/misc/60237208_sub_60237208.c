/* sub_60237208
 * address: 0x60237208   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60237208(int a1, Vec3 *a2, Vec3i *a3, Vec3 *a4)
{
  int v5; // r5
  int v6; // r6
  int v7; // r7
  sead_ListNode *v8; // r8

  v5 = 0;
  if ( dword_60C8D9DC && EffectData_update((EffectData *)(a1 + 16), a2, a3, a4) == 1 )
  {
    if ( !FIELD_U32(a1, 84) && !FIELD_U32(a1, 80) )
    {
      v6 = FIELD_U32(a1, 92);
      v7 = dword_60C8D9DC;
      v8 = (sead_ListNode *)(dword_60C8D9DC + 224);
      if ( v6 )
      {
        FIELD_U32(a1, 92) = 0;
        sead__ListNode__erase(a1 + 80);
        --FIELD_U32(v6, 8);
      }
      FIELD_U32(a1, 92) = v8;
      sead__ListNode__insertFront(v8, (sead_ListNode *)(a1 + 80));
      ++FIELD_U32(v7, 232);
    }
    v5 = 1;
    FIELD_U8(a1, 100) = 1;
  }
  return v5;
}
