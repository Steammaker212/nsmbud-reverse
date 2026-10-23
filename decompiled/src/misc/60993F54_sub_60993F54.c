/* sub_60993F54
 * address: 0x60993F54   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60993F54(int a1, int a2, int a3, int a4)
{
  unsigned int result; // r0
  int v9; // r0
  void *v10; // r0
  int v11; // r0

  result = sub_6085CFDC(a3);
  if ( result >= (unsigned int)FIELD_U16(a3, 214) + 10 )
  {
    FIELD_U32(a1, 12) = a3 + 136;
    FIELD_U32(a1, 16) = a4;
    FIELD_U32(a1, 20) = a3;
    v9 = sub_6085CFDC(a3);
    FIELD_U16(a1, 58) = v9;
    FIELD_U16(a1, 60) = FIELD_U16(a3, 214);
    v10 = (void *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 24))(a2, 2 * v9, 4);
    FIELD_U32(a1, 24) = v10;
    qmemcpy(v10, *(const void **)(a3 + 172), 2 * FIELD_U16(a1, 60));
    v11 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 24))(a2, 2 * FIELD_U16(a1, 58), 4);
    FIELD_U32(a1, 28) = v11;
    FIELD_U8(a1, 62) = 0;
    FIELD_U32(a1, 40) = 0;
    FIELD_U16(a1, 56) = 0;
    FIELD_U32(a1, 52) = 0;
    FIELD_U8(a1, 63) &= 0xFCu;
    FIELD_U32(a1, 48) = 0;
    FIELD_U8(a1, 65) = 0;
    qmemcpy((void *)sub_609885B8(v11, 0, 0), *(const void **)(a1 + 24), 2 * FIELD_U16(a1, 60));
    return (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 20) + 156))(
             FIELD_U32(a1, 20),
             FIELD_U32(a1, 28),
             (unsigned __int16)(FIELD_U16(a1, 60) + 5));
  }
  return result;
}
