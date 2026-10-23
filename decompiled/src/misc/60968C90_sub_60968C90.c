/* sub_60968C90
 * address: 0x60968C90   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60968C90(int a1, int a2)
{
  int v3; // r0
  int v4; // r7
  int result; // r0
  const void *v6; // r6
  int v7; // r0
  _DWORD v8[3]; // [sp+18h] [bp-148h] BYREF
  int (**v9)(); // [sp+24h] [bp-13Ch] BYREF
  const char *v10; // [sp+28h] [bp-138h]
  int v11; // [sp+2Ch] [bp-134h]
  int v12[16]; // [sp+30h] [bp-130h] BYREF
  int v13; // [sp+70h] [bp-F0h] BYREF

  FIELD_U32(a1, 56) = a2;
  v3 = operator_new_8DE25C(0x54u, *(void **)(a1 + 20), 4);
  FIELD_U32(a1, 52) = sub_6043C320(v3, FIELD_U32(a1, 56));
  v4 = 0;
  v12[0] = (int)&sead__SafeStringBase__vtable;
  v12[1] = (int)"arrow.raw";
  result = (*(int (__fastcall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(a1 + 56) + 24))(FIELD_U32(a1, 56), v12, 0);
  v6 = (const void *)result;
  if ( result )
  {
    agl_TextureData_ref((int)v12);
    v9 = &sead__SafeStringBase__vtable;
    v10 = "Cursour(agl debug)";
    sub_60920600((int)v12, &v9);
    sub_6091FDB0((int)v12, 1, 29, 32, 32, 1, 1, 0, 0, 1);
    sub_60913A6C(&v9, a1 + 72, 0);
    if ( v9 )
      v4 = dword_60CC73E8(v9);
    qmemcpy((void *)&v10[v4], v6, v12[10]);
    sub_60913A6C(&v9, a1 + 72, 0);
    v8[0] = v9;
    v8[1] = v10;
    v8[2] = v11;
    sub_60973CF8(v12, v8, FIELD_U32(a1, 80), 29, 32, 32, 0);
    v7 = agl_TextureSampler_ref(FIELD_U32(a1, 64));
    FIELD_U32(a1, 68) = v7;
    sub_60920EC8(v7, v12);
    return sub_609175E4((int)&v13);
  }
  return result;
}
