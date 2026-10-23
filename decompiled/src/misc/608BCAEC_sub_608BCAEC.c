/* sub_608BCAEC
 * address: 0x608BCAEC   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BCAEC(int a1, int *a2, int a3, unsigned int a4)
{
  int v8; // r7
  int v9; // r10
  unsigned int v10; // r6
  int v11; // r5
  int v12; // r0
  bool v13; // zf
  int v14; // r5
  _BYTE v16[133]; // [sp+43h] [bp-85h] BYREF

  v8 = 0;
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 24))(FIELD_U32(a1, 4), 0, 0);
  if ( (*(int (__fastcall **)(_DWORD, unsigned int, int, _DWORD))(**(_DWORD **)(a1 + 4) + 16))(
         FIELD_U32(a1, 4),
         (unsigned int)v16 & 0xFFFFFFC0,
         96,
         0) == 96
    && sub_608BCE28((unsigned int)v16 & 0xFFFFFFC0) == 1 )
  {
    v9 = sub_608BC98C((unsigned int)v16 & 0xFFFFFFC0);
    v10 = sub_608BC970((unsigned int)v16 & 0xFFFFFFC0) + v9;
    if ( v10 <= a4 )
    {
      v8 = 0;
      (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 24))(FIELD_U32(a1, 4), 0, 0);
      if ( (*(int (__fastcall **)(_DWORD, int, unsigned int, _DWORD))(**(_DWORD **)(a1 + 4) + 16))(
             FIELD_U32(a1, 4),
             a3,
             v10,
             0) == v10 )
      {
        sub_608BCDB8(a2, a3);
        v11 = 0;
        v12 = 0;
        if ( *a2 )
        {
          v13 = sub_608BC8E8(*a2);
          v12 = 0;
          if ( v13 )
            v12 = sub_608BC9A8(*a2);
        }
        FIELD_U32(a1, 8) = v12;
        if ( *a2 && sub_608BC92C(*a2) )
        {
          v14 = sub_608BC9F0(*a2);
          v11 = v14 + *(_DWORD *)(sub_608BCA14(a2[1]) + 64) + 8;
        }
        FIELD_U32(a1, 12) = v11;
        v8 = 1;
        FIELD_U16(a1, 16) = *(_WORD *)(sub_608BCA14(a2[1]) + 56);
      }
    }
  }
  return v8;
}
