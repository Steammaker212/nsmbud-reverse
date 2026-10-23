/* sub_60185D08
 * address: 0x60185D08   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60185D08(Actor *a1)
{
  int v2; // r1
  _BOOL4 result; // r0
  int id; // r1
  int v5; // r3
  bool v6; // zf
  int v7; // r3
  bool v8; // zf
  int v9; // r3
  bool v10; // zf
  int v11; // r3
  bool v12; // zf
  int v13; // r3
  bool v14; // zf
  int v15; // r3
  bool v16; // zf
  int v17; // r3
  bool v18; // zf
  int v19; // r3
  bool v20; // zf
  int v21; // r3
  bool v22; // zf
  int ProfileId; // r0

  v2 = sub_60190968(dword_60C8996C);
  result = 0;
  if ( v2 == 1 )
  {
    id = FIELD_U32(a1, 0x8);
    result = 1;
    v5 = FIELD_U32(dword_60C8996C, 1304);
    v6 = v5 == id;
    if ( v5 != id )
      v6 = FIELD_U32(dword_60C8996C, 1308) == id;
    if ( !v6 )
    {
      v7 = FIELD_U32(dword_60C8996C, 1312);
      v8 = v7 == id;
      if ( v7 != id )
        v8 = FIELD_U32(dword_60C8996C, 1316) == id;
      if ( !v8 )
      {
        v9 = FIELD_U32(dword_60C8996C, 1320);
        v10 = v9 == id;
        if ( v9 != id )
          v10 = FIELD_U32(dword_60C8996C, 1324) == id;
        if ( !v10 )
        {
          v11 = FIELD_U32(dword_60C8996C, 1328);
          v12 = v11 == id;
          if ( v11 != id )
            v12 = FIELD_U32(dword_60C8996C, 1332) == id;
          if ( !v12 )
          {
            v13 = FIELD_U32(dword_60C8996C, 1336);
            v14 = v13 == id;
            if ( v13 != id )
              v14 = FIELD_U32(dword_60C8996C, 1340) == id;
            if ( !v14 )
            {
              v15 = FIELD_U32(dword_60C8996C, 1344);
              v16 = v15 == id;
              if ( v15 != id )
                v16 = FIELD_U32(dword_60C8996C, 1348) == id;
              if ( !v16 )
              {
                v17 = FIELD_U32(dword_60C8996C, 1352);
                v18 = v17 == id;
                if ( v17 != id )
                  v18 = FIELD_U32(dword_60C8996C, 1356) == id;
                if ( !v18 )
                {
                  v19 = FIELD_U32(dword_60C8996C, 1360);
                  v20 = v19 == id;
                  if ( v19 != id )
                    v20 = FIELD_U32(dword_60C8996C, 1364) == id;
                  if ( !v20 )
                  {
                    v21 = FIELD_U32(dword_60C8996C, 1368);
                    v22 = v21 == id;
                    if ( v21 != id )
                      v22 = FIELD_U32(dword_60C8996C, 1372) == id;
                    if ( !v22 )
                    {
                      ProfileId = Actor__getProfileId(a1);
                      return ProfileId == 910
                          || ProfileId == 858
                          || ProfileId == 855
                          || ProfileId == 856
                          || ProfileId == 857;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
