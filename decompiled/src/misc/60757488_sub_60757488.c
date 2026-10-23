/* sub_60757488
 * address: 0x60757488   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60757488(float *a1, float *a2, float a3)
{
  _BOOL4 result; // r0
  float v5; // s4
  float v6; // s2
  float v7; // s4
  float v8; // s4
  float v9; // s4
  float v10; // s4
  float v11; // s4
  float v12; // s4
  float v13; // s4
  float v14; // s4
  float v15; // s4
  float v16; // s4
  float v17; // s4

  result = 0;
  v5 = *a1 - *a2;
  if ( v5 <= a3 )
  {
    v6 = -a3;
    if ( v5 >= (float)-a3 )
    {
      v7 = a1[1] - a2[1];
      if ( v7 <= a3 && v7 >= v6 )
      {
        v8 = a1[2] - a2[2];
        if ( v8 <= a3 && v8 >= v6 )
        {
          v9 = a1[3] - a2[3];
          if ( v9 <= a3 && v9 >= v6 )
          {
            v10 = a1[4] - a2[4];
            if ( v10 <= a3 && v10 >= v6 )
            {
              v11 = a1[5] - a2[5];
              if ( v11 <= a3 && v11 >= v6 )
              {
                v12 = a1[6] - a2[6];
                if ( v12 <= a3 && v12 >= v6 )
                {
                  v13 = a1[7] - a2[7];
                  if ( v13 <= a3 && v13 >= v6 )
                  {
                    v14 = a1[8] - a2[8];
                    if ( v14 <= a3 && v14 >= v6 )
                    {
                      v15 = a1[9] - a2[9];
                      if ( v15 <= a3 && v15 >= v6 )
                      {
                        v16 = a1[10] - a2[10];
                        if ( v16 <= a3 && v16 >= v6 )
                        {
                          v17 = a1[11] - a2[11];
                          return v17 <= a3 && v17 >= v6;
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
    }
  }
  return result;
}
