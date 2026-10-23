/* sub_60907438
 * address: 0x60907438   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60907438(int a1, int a2, float a3)
{
  int v6; // r6
  bool v7; // cc
  void (__fastcall *v8)(int, int *, int); // r7
  int (__fastcall *v9)(int, _DWORD, int); // r6
  int v10; // r5
  int v11; // t1
  int (**v13)(); // [sp+4h] [bp-4Ch] BYREF
  int *v14; // [sp+8h] [bp-48h]
  int v15; // [sp+Ch] [bp-44h]
  int v16; // [sp+10h] [bp-40h] BYREF

  v14 = &v16;
  v13 = &BufferedSafeStringBase_char_vtable_probably;
  v15 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v13);
  *(_BYTE *)v14 = 0;
  v13 = &off_60BD4C20;
  sub_608FDDF4((int)&v13, "%.8f", a3);
  ((void (__fastcall *)(int (***)()))v13[3])(&v13);
  v6 = 0;
  while ( *((_BYTE *)v14 + v6) )
  {
    if ( !*((_BYTE *)v14 + v6 + 1) )
    {
      ++v6;
      break;
    }
    if ( !*((_BYTE *)v14 + v6 + 2) )
    {
      v6 += 2;
      break;
    }
    v7 = v6 + 2 < 0x80000;
    v6 += 3;
    if ( !v7 )
    {
      v6 = 0;
      break;
    }
  }
  v8 = *(void (__fastcall **)(int, int *, int))(*(_DWORD *)a2 + 4);
  ((void (__fastcall *)(int (***)()))v13[3])(&v13);
  v8(a2, v14, v6);
  v9 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a2 + 4);
  v11 = FIELD_U32(a1, 4);
  v10 = a1 + 4;
  (*(void (__fastcall **)(int))(v11 + 12))(v10);
  return v9(a2, FIELD_U32(v10, 4), 1);
}
