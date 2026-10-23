/* root_parachute_ref
 * address: 0x60261800   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall root_parachute_ref(int a1)
{
  signed int v2; // r1
  int result; // r0
  int v4; // r4
  int *v5; // t1
  int v6; // r6
  _DWORD v7[2]; // [sp+0h] [bp-48h] BYREF
  float32x2_t v8[8]; // [sp+8h] [bp-40h] BYREF

  v2 = BobOmb_onCreate((Enemy *)a1);
  result = 2;
  if ( v2 != 2 )
  {
    sub_602618E8(a1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E44C);
    v7[0] = &sead__SafeStringBase__vtable;
    v7[1] = "root_parachute";
    sub_6025FA10(a1, (int)v8, (int)v7);
    v5 = *(int **)(a1 + 7068);
    v4 = a1 + 7068;
    v6 = *v5;
    Mtx34_rotateZ(v8, (unsigned int *)(v4 + 36));
    Mtx34_rotateY(v8, (unsigned int *)(v4 + 32));
    Mtx34_rotateX(v8, (unsigned int *)(v4 + 28));
    (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v6 + 60))(v6, v8);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 68))(v6, v4 + 16);
    ModelWrapper_updateModel(*(ModelWrapper **)v4);
    return 1;
  }
  return result;
}
