#include <string>
#include <vector>
using namespace std;
int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int tf = 1;
    int check = 0;
    for(int i = 0; i < skill_trees.size(); i++){
        string vec_str = skill_trees[i];
        for(int j = 0; j < vec_str.size(); j++){
            // vec_str[j]�� find_num ���ϱ�
            int find_num = skill.find(vec_str[j]);
            // �������������� ��� 
            if(find_num < 0 || find_num > 30){
                continue;
            }
            // üũ�� ������ find()�� ������ Ʋ����� 
            if(find_num != check){
                tf = 0;
                break;
            }
            //������ ���ڰ� ������� ����ϸ�
            else{
                check++;
            }
        }
        if(tf){
            answer++;
        }
        check = 0;
        tf = 1;
    }
    return answer;
}
