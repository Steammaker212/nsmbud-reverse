/* skl_root_ref_1F115C
 * address: 0x601F115C   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall skl_root_ref_1F115C(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, int (***)()); // r2
  int v4; // r0
  EffectData *v5; // r0
  signed int result; // r0
  int v7; // r0
  int (__fastcall *v8)(int, int (***)()); // r2
  int v9; // r0
  Vec3 v10; // [sp+8h] [bp-50h] BYREF
  int (**v11)(); // [sp+18h] [bp-40h] BYREF
  const char *v12; // [sp+1Ch] [bp-3Ch]
  float v13; // [sp+24h] [bp-34h]
  float v14; // [sp+34h] [bp-24h]
  float v15; // [sp+44h] [bp-14h]

  if ( FIELD_U8(a1, 729) )
  {
    v10.z = 0.0;
    v10.y = 0.0;
    v10.x = 0.0;
    v2 = **(_DWORD **)(a1 + 304);
    v3 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v2 + 84);
    v11 = &sead__SafeStringBase__vtable;
    v12 = "skl_root";
    v4 = v3(v2, &v11);
    (*(void (__fastcall **)(_DWORD, int, int (***)()))(***(_DWORD ***)(a1 + 304) + 108))(
      **(_DWORD **)(a1 + 304),
      v4,
      &v11);
    v10.x = v13;
    v10.y = v14;
    v10.z = v15;
    if ( FIELD_U8(a1, 730) )
      v5 = (EffectData *)(a1 + 312);
    else
      v5 = (EffectData *)(a1 + 376);
    sub_602375C4(v5, 896, &v10, 0, (Vec3 *)(a1 + 544));
    FIELD_U8(a1, 730) ^= 1u;
    FIELD_U8(a1, 729) = 0;
  }
  if ( sub_60235E50(a1 + 312) || (result = sub_60235E50(a1 + 376), result == 1) )
  {
    memset(&v10, 0, sizeof(v10));
    v7 = **(_DWORD **)(a1 + 304);
    v8 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v7 + 84);
    v11 = &sead__SafeStringBase__vtable;
    v12 = "skl_root";
    v9 = v8(v7, &v11);
    (*(void (__fastcall **)(_DWORD, int, int (***)()))(***(_DWORD ***)(a1 + 304) + 108))(
      **(_DWORD **)(a1 + 304),
      v9,
      &v11);
    v10.x = v13;
    v10.y = v14;
    v10.z = v15;
    if ( sub_60235E50(a1 + 312) == 1 )
      EffectData_update((EffectData *)(a1 + 312), &v10, 0, (Vec3 *)(a1 + 544));
    result = sub_60235E50(a1 + 376);
    if ( result == 1 )
      return EffectData_update((EffectData *)(a1 + 376), &v10, 0, (Vec3 *)(a1 + 544));
  }
  return result;
}
