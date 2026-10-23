/* sub_6098CCBC
 * address: 0x6098CCBC   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098CCBC(int a1, int a2)
{
  int v4; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r5
  int v8; // r1
  int v10; // r5
  int v11; // r0
  int v12; // r5
  int v13; // r0

  v4 = FIELD_U32(a1, 108);
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 16))(v4);
  FIELD_U8(a1, 123) = 0;
  switch ( a2 )
  {
    case -4:
      v5 = FIELD_U32(a1, 24);
      v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      close_ref(v5, v6, 1);
      goto LABEL_9;
    case -3:
      v7 = FIELD_U32(a1, 24);
      v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      return close_ref(v7, v8, 0);
    case -2:
      FIELD_U8(a1, 123) = 1;
      v10 = FIELD_U32(a1, 24);
      v11 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      close_ref(v10, v11, 0);
      goto LABEL_9;
    case -1:
      v12 = FIELD_U32(a1, 24);
      v13 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      close_ref(v12, v13, 0);
      if ( FIELD_U32(a1, 112) )
        (*(void (__fastcall **)(int, const char *))(*(_DWORD *)a1 + 260))(a1, "close");
      goto LABEL_9;
    default:
LABEL_9:
      FIELD_U8(a1, 122) = 3;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 140))(a1);
  }
}
