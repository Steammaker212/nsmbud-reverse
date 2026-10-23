/* sub_6098CB2C
 * address: 0x6098CB2C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098CB2C(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r5
  int v9; // r1
  int v10; // r0
  int v11; // r2
  int v12; // r5

  v4 = a1[27];
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  v5 = a1[28];
  if ( v5 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( (unsigned int)(a2 - 1) <= 1 )
      (*(void (__fastcall **)(_DWORD *, const char *))(*a1 + 260))(a1, "open");
  }
  switch ( a2 )
  {
    case 1:
      goto LABEL_8;
    case 2:
      v6 = a1[6];
      v7 = (*(int (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
      close_ref(v6, v7, 1);
LABEL_8:
      v8 = a1[6];
      v9 = (*(int (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
      v10 = v8;
      v11 = 0;
      goto LABEL_11;
    case 3:
      v12 = a1[6];
      v9 = (*(int (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
      v10 = v12;
      v11 = 1;
      goto LABEL_11;
    case 4:
      v10 = a1[6];
      v9 = 1;
      v11 = 2;
LABEL_11:
      open_ref(v10, v9, v11, 1);
      break;
    default:
      break;
  }
  *((_BYTE *)a1 + 122) = 1;
  *((_BYTE *)a1 + 123) = 0;
  *((_BYTE *)a1 + 129) = 0;
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 132))(a1);
}
