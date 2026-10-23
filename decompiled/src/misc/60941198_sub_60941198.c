/* sub_60941198
 * address: 0x60941198   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60941198(int a1, _DWORD *a2)
{
  void *v4; // r6
  const void *v5; // r10
  signed int v6; // r4
  int v7; // r0
  bool v8; // cc
  signed int v9; // r0
  int *v10; // r4
  int v11; // r6
  int v12; // r0
  int v13; // r1
  int i; // r3
  const char *v15; // r0
  _DWORD v17[10]; // [sp+0h] [bp-28h] BYREF

  v4 = *(void **)(a1 + 16);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v5 = (const void *)a2[1];
  if ( v4 != v5 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v6 = 0;
    v7 = a2[1];
    while ( *(_BYTE *)(v7 + v6) )
    {
      if ( !*(_BYTE *)(v7 + v6 + 1) )
      {
        ++v6;
        break;
      }
      if ( !*(_BYTE *)(v7 + v6 + 2) )
      {
        v6 += 2;
        break;
      }
      v8 = v6 + 2 <= 0x7FFFF;
      v6 += 3;
      if ( !v8 )
      {
        v6 = 0;
        break;
      }
    }
    v9 = FIELD_U32(a1, 20);
    if ( v6 >= v9 )
      v6 = v9 - 1;
    qmemcpy(v4, v5, v6);
    *((_BYTE *)v4 + v6) = 0;
  }
  v10 = default_ref();
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v11 = a2[1];
  (*(void (__fastcall **)(int *))(*v10 + 12))(v10);
  v12 = v10[1];
  if ( v11 == v12 )
  {
LABEL_21:
    v17[0] = &sead__SafeStringBase__vtable;
    v15 = "Icon=FOLDER_RED";
  }
  else
  {
    v13 = a2[1];
    for ( i = 1; *(unsigned __int8 *)(v13 + i - 1) == *(unsigned __int8 *)(v12 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v13 + i - 1) )
        goto LABEL_21;
      if ( i >= 524289 || *(unsigned __int8 *)(v13 + i) != *(unsigned __int8 *)(v12 + i) )
        break;
      if ( !*(_BYTE *)(v13 + i) )
        goto LABEL_21;
    }
    v17[0] = &sead__SafeStringBase__vtable;
    v15 = "Icon=FOLDER_GREEN";
  }
  v17[1] = v15;
  return sub_60969510(a1, v17);
}
