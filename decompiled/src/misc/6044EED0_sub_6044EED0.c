/* sub_6044EED0
 * address: 0x6044EED0   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044EED0(_DWORD *a1, int a2, int a3)
{
  int v3; // r5
  int *v4; // r12
  bool v5; // zf
  _DWORD *v6; // lr
  bool v7; // zf
  _DWORD *v9; // r1
  int i; // r2
  int v11; // r2
  _DWORD *v12; // r4

  v4 = a1 + 72;
  v3 = a1[72];
  if ( a3 )
  {
    v5 = v3 == 0;
    v6 = a1 + 72;
    if ( v3 )
    {
      v6 = a1 + 73;
      v5 = a1[73] == 0;
    }
    if ( v5 || (v6 = a1 + 74, !a1[74]) )
    {
      *v6 = a2;
      v3 = *v4;
    }
    v9 = a1 + 1;
    for ( i = 0; i < 24; ++i )
    {
      if ( v3 == *(v9 - 1) && a1[73] == *v9 && a1[74] == v9[1] )
      {
        *v4 = 0;
        a1[73] = 0;
        a1[74] = 0;
        return i;
      }
      v9 += 3;
    }
    v11 = 0;
    if ( *a1 )
    {
      if ( a1[3] )
      {
        if ( a1[6] )
        {
          if ( a1[9] )
          {
            if ( a1[12] )
            {
              if ( a1[15] )
              {
                if ( a1[18] )
                {
                  if ( a1[21] )
                  {
                    if ( a1[24] )
                    {
                      if ( a1[27] )
                      {
                        if ( a1[30] )
                        {
                          if ( a1[33] )
                          {
                            if ( a1[36] )
                            {
                              if ( a1[39] )
                              {
                                if ( a1[42] )
                                {
                                  if ( a1[45] )
                                  {
                                    if ( a1[48] )
                                    {
                                      if ( a1[51] )
                                      {
                                        if ( a1[54] )
                                        {
                                          if ( a1[57] )
                                          {
                                            if ( a1[60] )
                                            {
                                              if ( a1[63] )
                                              {
                                                if ( a1[66] )
                                                {
                                                  if ( a1[69] )
                                                    return -1;
                                                  v11 = 23;
                                                }
                                                else
                                                {
                                                  v11 = 22;
                                                }
                                              }
                                              else
                                              {
                                                v11 = 21;
                                              }
                                            }
                                            else
                                            {
                                              v11 = 20;
                                            }
                                          }
                                          else
                                          {
                                            v11 = 19;
                                          }
                                        }
                                        else
                                        {
                                          v11 = 18;
                                        }
                                      }
                                      else
                                      {
                                        v11 = 17;
                                      }
                                    }
                                    else
                                    {
                                      v11 = 16;
                                    }
                                  }
                                  else
                                  {
                                    v11 = 15;
                                  }
                                }
                                else
                                {
                                  v11 = 14;
                                }
                              }
                              else
                              {
                                v11 = 13;
                              }
                            }
                            else
                            {
                              v11 = 12;
                            }
                          }
                          else
                          {
                            v11 = 11;
                          }
                        }
                        else
                        {
                          v11 = 10;
                        }
                      }
                      else
                      {
                        v11 = 9;
                      }
                    }
                    else
                    {
                      v11 = 8;
                    }
                  }
                  else
                  {
                    v11 = 7;
                  }
                }
                else
                {
                  v11 = 6;
                }
              }
              else
              {
                v11 = 5;
              }
            }
            else
            {
              v11 = 4;
            }
          }
          else
          {
            v11 = 3;
          }
        }
        else
        {
          v11 = 2;
        }
      }
      else
      {
        v11 = 1;
      }
    }
    a1[3 * v11] = v3;
    v12 = &a1[3 * v11];
    v12[1] = a1[73];
    v12[2] = a1[74];
    *v4 = 0;
    a1[73] = 0;
    a1[74] = 0;
    return v11;
  }
  else
  {
    v7 = v3 == 0;
    if ( v3 )
    {
      v4 = a1 + 73;
      v7 = a1[73] == 0;
    }
    if ( v7 || (v4 = a1 + 74, !a1[74]) )
    {
      *v4 = a2;
      return -1;
    }
    else
    {
      return -1;
    }
  }
}
