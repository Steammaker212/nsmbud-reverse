/* sub_600CF7C4
 * address: 0x600CF7C4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_600CF7C4(int a1, int a2)
{
  _BYTE *result; // r0
  int v5; // t1
  int *v6; // r6
  int v7; // r7
  void (__fastcall *v8)(int, int); // r5
  int v9; // r0

  v5 = FIELD_U8(a1, 7266);
  result = (_BYTE *)(a1 + 7266);
  if ( v5 )
  {
    *result = 0;
    v6 = (int *)(a1 + 6300);
    v7 = FIELD_U32(a1, 6300);
    v8 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 732);
    v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 736))(a1);
    v8(a1, v9);
    result = *(_BYTE **)(a1 + 6300);
    if ( (int)result < v7 )
    {
      FIELD_U32(a1, 6308) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 780))(a1);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 768))(a1);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 996))(a1);
      if ( *v6 <= 0 )
      {
        *v6 = 0;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 956))(a1);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1088))(a1, a2);
        return (_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 880))(a1);
      }
      else
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 956))(a1);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1084))(a1, a2);
        return (_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 876))(a1);
      }
    }
  }
  return result;
}
