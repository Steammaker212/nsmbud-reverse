/* sub_603BD7F0
 * address: 0x603BD7F0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BD7F0(int a1)
{
  _DWORD *v1; // r4
  int v2; // t1
  float32x2_t v4[8]; // [sp+0h] [bp-40h] BYREF

  v1 = (_DWORD *)a1;
  sub_6039FB38(a1, v4);
  v2 = v1[1707];
  v1 += 1707;
  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 68))(v2, v1 - 75);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v1 + 60))(*v1, v4);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v1 + 52))(*v1);
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v1 + 56))(*v1);
}
