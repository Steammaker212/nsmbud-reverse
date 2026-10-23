/* sub_6098A534
 * address: 0x6098A534   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098A534(int a1, int a2, int a3)
{
  _BYTE *v6; // r5
  void (__fastcall *v7)(int, int, _DWORD *); // r8
  const char *v8; // r4
  int result; // r0
  _DWORD v10[67]; // [sp+8h] [bp-378h] BYREF
  int (**v11)(); // [sp+114h] [bp-26Ch] BYREF
  const char *v12; // [sp+118h] [bp-268h]
  int v13; // [sp+11Ch] [bp-264h]
  int v14; // [sp+120h] [bp-260h] BYREF
  char v15; // [sp+220h] [bp-160h]
  _DWORD v16[11]; // [sp+224h] [bp-15Ch] BYREF
  int (**v17)(); // [sp+250h] [bp-130h] BYREF
  const char *v18; // [sp+254h] [bp-12Ch]
  int v19; // [sp+258h] [bp-128h]
  int v20; // [sp+25Ch] [bp-124h] BYREF

  v18 = (const char *)&v20;
  v17 = &BufferedSafeStringBase_char_vtable_probably;
  v19 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
  *v18 = 0;
  v17 = &off_60BD94BC;
  v6 = (_BYTE *)sub_608E8770(dword_60CCEBD0, a3, (int)&v17);
  memset(&v16[1], 0, 40);
  v16[0] = &off_60BFAA14;
  if ( sub_608E6B4C(v6, (int)v16) )
  {
    v12 = (const char *)&v14;
    v11 = &BufferedSafeStringBase_char_vtable_probably;
    v13 = 256;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v11);
    *v12 = 0;
    v11 = &off_60BD94BC;
    v15 = 0;
    while ( sub_608E7F80((int)v16, (int)&v11, 1) )
    {
      if ( !v15 )
      {
        v7 = *(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 12);
        ((void (__fastcall *)(int (***)()))v17[3])(&v17);
        v8 = v18;
        ((void (__fastcall *)(int (***)()))v11[3])(&v11);
        sub_6017D5C0(v10, "%s/%s", v8, v12);
        v7(a1, a2, v10);
      }
    }
  }
  v16[0] = &off_60BFAA14;
  result = v16[2];
  if ( v16[2] )
    return sub_608E6B98((_BYTE *)v16[2], (int)v16);
  return result;
}
