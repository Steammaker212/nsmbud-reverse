/* sub_608F0654
 * address: 0x608F0654   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F0654(int a1, _DWORD *a2, int a3)
{
  int v6; // r8
  int v7; // r0
  int v8; // r6
  int v10; // r0
  int v11; // r0
  int v12; // r4
  int v13; // r4

  v6 = a1 + 4;
  sead__CriticalSection__lock(a1 + 4);
  v7 = a2[24];
  v8 = 0;
  if ( v7 != a3 )
  {
    switch ( a3 )
    {
      case 1:
        if ( !v7 )
        {
          v8 = 1;
          a2[24] = 1;
          sub_608F0A9C(a1, a1 + 52, a2);
          v10 = FIELD_U32(a1, 44);
          if ( v10 )
            v8 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v10 + 12))(v10, 1, 1);
        }
        break;
      case 2:
        v11 = 2;
        goto LABEL_15;
      case 4:
        a2[24] = 4;
        v12 = a2[16];
        if ( v12 )
        {
          a2[16] = 0;
          sead__ListNode__erase(a2 + 13);
          --FIELD_U32(v12, 8);
        }
        sub_608F0A9C(a1, a1 + 76, a2);
        (*(void (__fastcall **)(_DWORD *))(*a2 + 44))(a2);
        v8 = 1;
        break;
      case 5:
        v8 = 1;
        a2[24] = 5;
        break;
      case 6:
        if ( v7 == 4 )
        {
          a2[24] = 6;
          (*(void (__fastcall **)(_DWORD *))(*a2 + 68))(a2);
          (*(void (__fastcall **)(_DWORD *))(*a2 + 72))(a2);
          sub_608F0A9C(a1, a1 + 112, a2);
          v8 = 1;
        }
        break;
      case 7:
        (*(void (__fastcall **)(_DWORD *))(*a2 + 52))(a2);
        v11 = 7;
LABEL_15:
        a2[24] = v11;
        v8 = 1;
        v13 = a2[16];
        if ( v13 )
        {
          a2[16] = 0;
          sead__ListNode__erase(a2 + 13);
          --FIELD_U32(v13, 8);
        }
        break;
      default:
        break;
    }
  }
  sead__CriticalSection__unlock(v6);
  return v8;
}
