/* sub_601A446C
 * address: 0x601A446C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A446C(int a1)
{
  int v2; // r0
  int v3; // r4
  unsigned int v4; // r0
  int v6; // [sp+4h] [bp-1Ch] BYREF
  int v7; // [sp+8h] [bp-18h]
  unsigned int v8; // [sp+Ch] [bp-14h]

  v2 = sub_601CF9C0(dword_60C8AEF0);
  v6 = -1;
  v7 = -1;
  v8 = -1;
  sub_6019EC34(&v6, (_DWORD *)(v2 + 1032));
  v3 = 0;
  v4 = v7 + 2 * v6;
  if ( v4 >= 0x12 )
    v4 = 0;
  if ( sub_60183038(*(_DWORD *)(a1 + 4 * v4 + 28), v8, 0x20000000) && v6 == 3 )
    return sub_601B12A0(dword_60C8A8C0);
  return v3;
}
