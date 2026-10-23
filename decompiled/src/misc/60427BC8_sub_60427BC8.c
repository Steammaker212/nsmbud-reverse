/* sub_60427BC8
 * address: 0x60427BC8   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60427BC8(int a1, int a2, int a3, int a4)
{
  int v8; // r5
  int v9; // r6
  int v10; // r7
  int v11; // r0
  int v12; // r0
  int (**v14)(); // [sp+4h] [bp-6Ch] BYREF
  const char *v15; // [sp+8h] [bp-68h]
  int (**v16)(); // [sp+Ch] [bp-64h] BYREF
  int *v17; // [sp+10h] [bp-60h]
  int v18; // [sp+14h] [bp-5Ch]
  int v19; // [sp+18h] [bp-58h] BYREF

  v17 = &v19;
  v16 = &BufferedSafeStringBase_char_vtable_probably;
  v18 = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v16);
  v8 = a3 + 1;
  v9 = a4 + 97;
  *(_BYTE *)v17 = 0;
  v16 = &off_60BD4BF0;
  sub_608FDDF4((int)&v16, "lmDifCSW%u%c", v8, v9);
  v10 = a1 + 6896;
  v11 = sub_6095C088(v10, &v16);
  if ( v11 >= 0 )
  {
    v14 = &sead__SafeStringBase__vtable;
    v15 = "lmDifCob";
    ((void (__fastcall *)(int, int, int (***)(), int, _DWORD))sub_60427D38)(v11, a2, &v14, v11, 0);
  }
  sub_608FDDF4((int)&v16, "lmSpcCSW%u%c", v8, v9);
  v12 = sub_6095C088(v10, &v16);
  if ( v12 >= 0 )
  {
    v14 = &sead__SafeStringBase__vtable;
    v15 = "lmSpcCob";
    ((void (__fastcall *)(int, int, int (***)(), int, int))sub_60427D38)(v12, a2, &v14, v12, 1);
  }
  return sub_60436664(a2);
}
