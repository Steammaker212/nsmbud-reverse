/* sub_60797890
 * address: 0x60797890   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60797890(int a1)
{
  int v2; // r4
  bool v3; // zf
  _BOOL4 v4; // r0
  bool v5; // zf
  signed int v7; // r0
  int v8; // r0
  bool v9; // zf
  bool v10; // zf
  signed int smthOut; // [sp+4h] [bp-14h] BYREF

  v2 = 0;
  if ( (FIELD_U8(a1, 1234) & 0x10) == 0 )
  {
    if ( !sub_60766714(a1) )
      goto LABEL_8;
    if ( (FIELD_U32(a1, 1204) & 0x14000) == 0 )
    {
      v3 = (FIELD_U8(a1, 1231) & 1) == 0;
      if ( (FIELD_U8(a1, 1231) & 1) == 0 )
        v3 = (FIELD_U8(a1, 1220) & 4) == 0;
      if ( v3 )
      {
LABEL_8:
        v4 = sub_6075EE0C(a1);
        v5 = v4;
        if ( v4 )
          v5 = FIELD_U32(a1, 1320) == 9;
        if ( v5 && FIELD_U8(a1, 15076) )
        {
          if ( (FIELD_U8(a1, 1218) & 8) != 0 )
          {
            v8 = sub_607C7184(a1);
            if ( !v8 )
              return v2;
LABEL_20:
            if ( (FIELD_U8(v8, 6904) & 4) != 0 )
              return v2;
            v2 = 0;
            v9 = (FIELD_U8(v8, 1211) & 4) == 0;
            goto LABEL_22;
          }
          v2 = 0;
          smthOut = 0;
          if ( sub_600005D4((StageActor *)a1, &smthOut) == 1 )
          {
            v7 = smthOut;
            v2 = 0;
            if ( (unsigned int)smthOut >= 4 )
              v7 = 0;
            v8 = *(_DWORD *)(PlayerMgr_instance + 4 * v7 + 32);
            if ( !v8 )
              return v2;
            goto LABEL_20;
          }
          if ( (FIELD_U8(a1, 1214) & 0x20) == 0 )
          {
            v10 = (FIELD_U8(a1, 6904) & 4) == 0;
            if ( (FIELD_U8(a1, 6904) & 4) == 0 )
              v10 = (FIELD_U8(a1, 1211) & 4) == 0;
            if ( v10 )
            {
              v2 = 0;
              v9 = (FIELD_U8(a1, 1239) & 0x40) == 0;
LABEL_22:
              if ( v9 )
                return 1;
            }
          }
        }
      }
    }
  }
  return v2;
}
