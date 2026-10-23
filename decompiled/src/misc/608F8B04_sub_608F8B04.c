/* sub_608F8B04
 * address: 0x608F8B04   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F8B04(int a1)
{
  int v2; // r7
  int v3; // r4
  int v4; // r6
  int v5; // r6
  int v7; // r0

  v2 = FIELD_U32(a1, 36);
  if ( !v2 )
    return FIELD_U32(a1, 32);
  v3 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v3 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
    v2 = FIELD_U32(a1, 36);
  }
  if ( (FIELD_U8(v2, 120) & 1) != 0 )
    sead__CriticalSection__lock(v2 + 84);
  if ( FIELD_U32(a1, 80) != 1 )
  {
    if ( FIELD_U32(a1, 124) == FIELD_U32(a1, 28) )
    {
      v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1) - FIELD_U32(a1, 128);
      if ( (*(int (__fastcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 36) + 32))(
             FIELD_U32(a1, 36),
             FIELD_U32(a1, 28),
             v4) )
      {
        FIELD_U32(a1, 32) = v4;
        __dmb(0xBu);
        v7 = FIELD_U32(a1, 128);
        FIELD_U32(a1, 124) = v7;
        FIELD_U32(a1, 28) = v7;
        goto LABEL_15;
      }
    }
    goto LABEL_12;
  }
  v4 = FIELD_U32(a1, 32);
  if ( FIELD_U32(a1, 128) == v4 + FIELD_U32(a1, 28) )
  {
    v5 = FIELD_U32(a1, 124);
    v4 = v5 - (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
    if ( (*(int (__fastcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 36) + 36))(
           FIELD_U32(a1, 36),
           FIELD_U32(a1, 28),
           v4) )
    {
      FIELD_U32(a1, 128) = FIELD_U32(a1, 124);
      FIELD_U32(a1, 32) = v4;
      goto LABEL_15;
    }
LABEL_12:
    v4 = FIELD_U32(a1, 32);
  }
LABEL_15:
  if ( (FIELD_U8(v2, 120) & 1) != 0 )
    sead__CriticalSection__unlock(v2 + 84);
  if ( v3 )
    sead__CriticalSection__unlock(v3);
  return v4;
}
