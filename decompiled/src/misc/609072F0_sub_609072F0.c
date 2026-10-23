/* sub_609072F0
 * address: 0x609072F0   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609072F0(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v7; // r6
  bool v8; // cc
  void (__fastcall *v9)(int, int *, int); // r7
  int (__fastcall *v10)(int, _DWORD, int); // r6
  int v11; // r5
  int v12; // t1
  int (**v14)(); // [sp+4h] [bp-44h] BYREF
  int *v15; // [sp+8h] [bp-40h]
  int v16; // [sp+Ch] [bp-3Ch]
  int v17; // [sp+10h] [bp-38h] BYREF

  v15 = &v17;
  v14 = &BufferedSafeStringBase_char_vtable_probably;
  v16 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v14);
  *(_BYTE *)v15 = 0;
  v14 = &off_60BD4C20;
  sub_608FDDF4((int)&v14, "%lld", a5);
  ((void (__fastcall *)(int (***)()))v14[3])(&v14);
  v7 = 0;
  while ( *((_BYTE *)v15 + v7) )
  {
    if ( !*((_BYTE *)v15 + v7 + 1) )
    {
      ++v7;
      break;
    }
    if ( !*((_BYTE *)v15 + v7 + 2) )
    {
      v7 += 2;
      break;
    }
    v8 = v7 + 2 < 0x80000;
    v7 += 3;
    if ( !v8 )
    {
      v7 = 0;
      break;
    }
  }
  v9 = *(void (__fastcall **)(int, int *, int))(*(_DWORD *)a2 + 4);
  ((void (__fastcall *)(int (***)()))v14[3])(&v14);
  v9(a2, v15, v7);
  v10 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a2 + 4);
  v12 = FIELD_U32(a1, 4);
  v11 = a1 + 4;
  (*(void (__fastcall **)(int))(v12 + 12))(v11);
  return v10(a2, FIELD_U32(v11, 4), 1);
}
