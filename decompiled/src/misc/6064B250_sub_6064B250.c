/* sub_6064B250
 * address: 0x6064B250   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6064B250(_BYTE *a1, int a2)
{
  int v4; // r0
  float result; // s0
  float v6; // s0
  float v7[6]; // [sp+0h] [bp-18h]

  v4 = (unsigned __int8)a1[7259];
  if ( !v4 )
    goto LABEL_6;
  if ( v4 == 1 )
    goto LABEL_5;
  result = 0.0;
  if ( v4 != 2 )
    return result;
  if ( a1[7256] )
LABEL_5:
    v6 = -(*(float (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 232))(a1);
  else
LABEL_6:
    v6 = (*(float (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 232))(a1);
  v7[0] = v6;
  v7[1] = -(*(float (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 236))(a1);
  return v7[a2];
}
