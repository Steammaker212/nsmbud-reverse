/* sub_604F9ED0
 * address: 0x604F9ED0   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F9ED0(int *a1)
{
  int *v1; // r4
  _DWORD *v2; // r5
  _DWORD **v3; // r6
  int v4; // r0
  int v5; // t1
  _DWORD *v6; // r6
  int v7; // r0
  int result; // r0
  int v9; // [sp+4h] [bp-24h]
  int (**v10)(); // [sp+8h] [bp-20h] BYREF
  int v11; // [sp+Ch] [bp-1Ch]

  v1 = a1;
  sub_60473DE4(a1 + 10, 2u, &dword_60CA6EB4, 0);
  v3 = (_DWORD **)(v1 + 1024);
  v2 = (_DWORD *)v1[1024];
  (*(void (__fastcall **)(_DWORD *))(*v2 + 12))(v2);
  v4 = v2[1];
  v10 = &sead__SafeStringBase__vtable;
  v11 = v4;
  v5 = v1[1025];
  v1 += 1025;
  sub_6047E0AC(&v10, *(v1 - 110), v5, v1 + 1, 0);
  v6 = *v3;
  (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
  v7 = v6[1];
  v10 = &sead__SafeStringBase__vtable;
  v11 = v7;
  sub_6047E0AC(&v10, *(v1 - 109), *v1, v1 + 1, 0, v9);
  result = *v1 + 1;
  *v1 = result;
  return result;
}
