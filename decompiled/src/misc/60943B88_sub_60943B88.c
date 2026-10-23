/* sub_60943B88
 * address: 0x60943B88   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60943B88(int a1)
{
  char *v2; // r5
  _DWORD *result; // r0
  _DWORD *v4; // r4
  int v5; // [sp+4h] [bp-41Ch] BYREF

  v2 = off_60C5CB34;
  result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1);
  switch ( (unsigned int)result )
  {
    case 0u:
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 0xFu:
    case 0x10u:
    case 0x11u:
      result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
      break;
    case 0x14u:
      v4 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
      (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
      result = sub_604209A4(&v5, aS_1, v2, v4[1]);
      break;
    default:
      return result;
  }
  return result;
}
