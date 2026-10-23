/* sub_60589E88
 * address: 0x60589E88   size: 992   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60589E88(int result, int a2, int a3)
{
  _DWORD *v3; // lr
  int v4; // r12

  if ( (FIELD_U32(result, 7520) != a2 || FIELD_U32(result, 7524) != a3)
    && (FIELD_U32(result, 7528) != a2 || FIELD_U32(result, 7532) != a3)
    && (FIELD_U32(result, 7536) != a2 || FIELD_U32(result, 7540) != a3)
    && (FIELD_U32(result, 7544) != a2 || FIELD_U32(result, 7548) != a3)
    && (FIELD_U32(result, 7552) != a2 || FIELD_U32(result, 7556) != a3)
    && (FIELD_U32(result, 7560) != a2 || FIELD_U32(result, 7564) != a3)
    && (FIELD_U32(result, 7568) != a2 || FIELD_U32(result, 7572) != a3)
    && (FIELD_U32(result, 7576) != a2 || FIELD_U32(result, 7580) != a3)
    && (FIELD_U32(result, 7584) != a2 || FIELD_U32(result, 7588) != a3)
    && (FIELD_U32(result, 7592) != a2 || FIELD_U32(result, 7596) != a3)
    && (FIELD_U32(result, 7600) != a2 || FIELD_U32(result, 7604) != a3)
    && (FIELD_U32(result, 7608) != a2 || FIELD_U32(result, 7612) != a3)
    && (FIELD_U32(result, 7616) != a2 || FIELD_U32(result, 7620) != a3)
    && (FIELD_U32(result, 7624) != a2 || FIELD_U32(result, 7628) != a3)
    && (FIELD_U32(result, 7632) != a2 || FIELD_U32(result, 7636) != a3)
    && (FIELD_U32(result, 7640) != a2 || FIELD_U32(result, 7644) != a3) )
  {
    v3 = (_DWORD *)(result + 7520);
    if ( FIELD_U32(result, 7520) )
    {
      v3 = (_DWORD *)(result + 7528);
      if ( FIELD_U32(result, 7528) )
      {
        v3 = (_DWORD *)(result + 7536);
        if ( FIELD_U32(result, 7536) )
        {
          v3 = (_DWORD *)(result + 7544);
          if ( FIELD_U32(result, 7544) )
          {
            v3 = (_DWORD *)(result + 7552);
            if ( FIELD_U32(result, 7552) )
            {
              v3 = (_DWORD *)(result + 7560);
              if ( FIELD_U32(result, 7560) )
              {
                v3 = (_DWORD *)(result + 7568);
                if ( FIELD_U32(result, 7568) )
                {
                  v3 = (_DWORD *)(result + 7576);
                  if ( FIELD_U32(result, 7576) )
                  {
                    v3 = (_DWORD *)(result + 7584);
                    if ( FIELD_U32(result, 7584) )
                    {
                      v3 = (_DWORD *)(result + 7592);
                      if ( FIELD_U32(result, 7592) )
                      {
                        v3 = (_DWORD *)(result + 7600);
                        if ( FIELD_U32(result, 7600) )
                        {
                          v3 = (_DWORD *)(result + 7608);
                          if ( FIELD_U32(result, 7608) )
                          {
                            v3 = (_DWORD *)(result + 7616);
                            if ( FIELD_U32(result, 7616) )
                            {
                              v3 = (_DWORD *)(result + 7624);
                              if ( FIELD_U32(result, 7624) )
                              {
                                v3 = (_DWORD *)(result + 7632);
                                if ( FIELD_U32(result, 7632) )
                                {
                                  v3 = (_DWORD *)(result + 7640);
                                  if ( FIELD_U32(result, 7640) )
                                    return result;
                                  v4 = 15;
                                }
                                else
                                {
                                  v4 = 14;
                                }
                              }
                              else
                              {
                                v4 = 13;
                              }
                            }
                            else
                            {
                              v4 = 12;
                            }
                          }
                          else
                          {
                            v4 = 11;
                          }
                        }
                        else
                        {
                          v4 = 10;
                        }
                      }
                      else
                      {
                        v4 = 9;
                      }
                    }
                    else
                    {
                      v4 = 8;
                    }
                  }
                  else
                  {
                    v4 = 7;
                  }
                }
                else
                {
                  v4 = 6;
                }
              }
              else
              {
                v4 = 5;
              }
            }
            else
            {
              v4 = 4;
            }
          }
          else
          {
            v4 = 3;
          }
        }
        else
        {
          v4 = 2;
        }
      }
      else
      {
        v4 = 1;
      }
    }
    else
    {
      v4 = 0;
    }
    *v3 = a2;
    *(_DWORD *)(result + 8 * v4 + 7524) = a3;
    FIELD_U8(result, 7516) = 1;
  }
  return result;
}
