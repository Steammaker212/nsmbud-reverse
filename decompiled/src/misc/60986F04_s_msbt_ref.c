/* s_msbt_ref
 * address: 0x60986F04   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall s_msbt_ref(int a1, const char **a2)
{
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // r4
  int v8; // r1
  int result; // r0
  int (**v10)(); // [sp+4h] [bp-12Ch] BYREF
  int *v11; // [sp+8h] [bp-128h]
  int v12; // [sp+Ch] [bp-124h]
  int v13; // [sp+10h] [bp-120h] BYREF

  v11 = &v13;
  v10 = &BufferedSafeStringBase_char_vtable_probably;
  v12 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v10);
  *(_BYTE *)v11 = 0;
  v10 = &off_60BD94BC;
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  sub_608FDDF4((int)&v10, "%s.msbt", a2[1]);
  v4 = FIELD_U32(a1, 24);
  if ( v4 == a1 + 20 )
    return 0;
  v5 = FIELD_U32(a1, 32);
  v6 = a1 + 20 - v5;
  v7 = v4 - v5;
  while ( 1 )
  {
    v8 = (*(int (__fastcall **)(_DWORD, int (***)()))(**(_DWORD **)(v7 + 24) + 32))(FIELD_U32(v7, 24), &v10);
    if ( v8 >= 0 )
    {
      result = FIELD_U32(v7, 32);
      if ( FIELD_U32(v7, 28) > (unsigned int)v8 )
        result += 12 * v8;
      if ( result )
        break;
    }
    v4 = FIELD_U32(v4, 4);
    v7 = v4 - v5;
    if ( v4 - v5 == v6 )
      return 0;
  }
  return result;
}
