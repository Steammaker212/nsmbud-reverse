/* sub_608E8EFC
 * address: 0x608E8EFC   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E8EFC(int a1, _DWORD *a2)
{
  signed int v4; // r7
  void *v5; // r10
  const void *v6; // r8
  int v7; // r9
  signed int v8; // r0
  int v10; // r0
  bool v11; // cc
  _DWORD v12[10]; // [sp+0h] [bp-28h] BYREF

  if ( FIELD_S32(a1, 8) <= 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
  else
    **(_BYTE **)(a1 + 4) = 0;
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = ":";
  v4 = sub_6018506C(a2, v12);
  if ( v4 == -1 )
    return 0;
  v5 = *(void **)(a1 + 4);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v6 = (const void *)a2[1];
  v7 = 1;
  if ( v5 != v6 )
  {
    if ( v4 < 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v4 = 0;
      v10 = a2[1];
      while ( *(_BYTE *)(v10 + v4) )
      {
        if ( !*(_BYTE *)(v10 + v4 + 1) )
        {
          ++v4;
          break;
        }
        if ( !*(_BYTE *)(v10 + v4 + 2) )
        {
          v4 += 2;
          break;
        }
        v11 = v4 + 2 < 0x80000;
        v4 += 3;
        if ( !v11 )
        {
          v4 = 0;
          break;
        }
      }
    }
    v8 = FIELD_U32(a1, 8);
    if ( v4 >= v8 )
      v4 = v8 - 1;
    qmemcpy(v5, v6, v4);
    *((_BYTE *)v5 + v4) = 0;
  }
  return v7;
}
