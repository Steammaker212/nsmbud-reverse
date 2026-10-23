/* sub_606227D4
 * address: 0x606227D4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606227D4(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  bool v4; // zf
  int v5; // r4
  double (__fastcall **v6)(int); // t1
  int v8; // s2

  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6640) = v2 & 0xF;
  FIELD_U32(a1, 6644) = (unsigned __int8)v2 >> 4;
  FIELD_F32(a1, 6648) = (float)(((v2 >> 8) & 0xF) + 8) * 16.0;
  v3 = (unsigned __int16)v2 >> 12;
  FIELD_U32(a1, 6652) = v3;
  v4 = v3 == 1;
  FIELD_U32(a1, 6656) = HIWORD(v2) & 0xF;
  if ( v3 == 1 )
    LOBYTE(v3) = 1;
  FIELD_U32(a1, 6320) = 0;
  if ( v4 )
    FIELD_U8(a1, 7388) = v3;
  FIELD_U32(a1, 500) = 1128595456;
  FIELD_U32(a1, 504) = 1155530752;
  FIELD_U32(a1, 508) = 1128595456;
  FIELD_U32(a1, 512) = 1128595456;
  FIELD_U32(a1, 6316) = 1124073472;
  v6 = *(double (__fastcall ***)(int))(a1 + 7392);
  v5 = a1 + 7392;
  FIELD_F64(v5, 4) = (*v6)(v5);
  FIELD_U32(v5, 12) = v8;
  return v5 + 4;
}
