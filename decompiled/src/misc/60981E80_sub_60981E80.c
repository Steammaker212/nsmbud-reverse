/* sub_60981E80
 * address: 0x60981E80   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60981E80(_DWORD *a1, int a2, int a3, const char *a4, int a5, int a6)
{
  const char *v6; // r7
  int v10; // r0
  void (__fastcall *v11)(_DWORD *, _DWORD *); // r2
  int v12; // r5
  _DWORD *v13; // r7
  _DWORD v15[11]; // [sp+Ch] [bp-2Ch] BYREF

  v6 = a4;
  v10 = *(_DWORD *)(FIELD_U32(a6, 24) + 72);
  if ( v10 )
    v6 = (const char *)(*(int (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)v10 + 36))(
                         v10,
                         a4,
                         FIELD_U32(a5, 12));
  v11 = *(void (__fastcall **)(_DWORD *, _DWORD *))(*a1 + 84);
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = v6;
  v11(a1, v15);
  v12 = s_bflyt_ref_857AC0((int)a1, v6);
  v13 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, const char *, int, int))(*a1 + 80))(a1, v6, a5, a6);
  v13[19] = a1;
  (*(void (__fastcall **)(_DWORD *, int, int, int, _DWORD, int, int))(*v13 + 56))(v13, a2, a3, v12, a1[9], a6, a5);
  return v13;
}
